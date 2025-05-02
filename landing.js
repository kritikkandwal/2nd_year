import { useEffect, useState } from 'react';
import { Canvas } from '@react-three/fiber';
import { useGLTF, OrbitControls } from '@react-three/drei';
import { motion } from 'framer-motion';
import Lottie from 'react-lottie';
import Particles from 'react-particles-js';

// AI Chatbot Component
const ChatBot = () => (
  <div className="fixed bottom-8 right-8 bg-black/20 backdrop-blur-lg rounded-2xl p-4 border border-cyan-500/30 shadow-lg neon-glow">
    {/* Chatbot implementation */}
  </div>
);

// 3D Car Model Component
function CarModel() {
  const { scene } = useGLTF('/sports_car.glb');
  return <primitive object={scene} />;
}

// Main Hero Section
export default function Landing() {
  const [spotsAvailable, setSpotsAvailable] = useState(142);
  const [darkMode, setDarkMode] = useState(true);

  useEffect(() => {
    // GSAP animations for text
    gsap.to(".typewriter", {
      text: "Smart Parking, Smarter Cities",
      duration: 2,
      ease: "power1.in",
      delay: 0.5
    });
  }, []);

  return (
    <div className={`min-h-screen ${darkMode ? 'bg-gray-900' : 'bg-gray-50'} transition-colors`}>
      <Particles className="absolute inset-0" params={{
        /* Configure particle effects */
      }}/>

      <header className="relative z-10">
        <nav className="glassmorphism-nav p-6 flex justify-between items-center">
          <h1 className="text-2xl font-bold neon-text">ParkAI</h1>
          <button onClick={() => setDarkMode(!darkMode)} className="neon-button">
            {darkMode ? '☀️ Light' : '🌙 Dark'}
          </button>
        </nav>
      </header>

      <main className="relative z-10">
        <section className="hero min-h-screen flex items-center">
          <div className="container mx-auto px-6 flex flex-col md:flex-row items-center">
            <div className="md:w-1/2">
              <h1 className="typewriter text-5xl font-bold mb-6 neon-heading"></h1>
              <motion.button
                whileHover={{ scale: 1.05 }}
                className="bg-cyan-500 text-white px-8 py-4 rounded-full text-lg font-semibold hover:bg-cyan-400 transition-all neon-button"
              >
                Start Parking
              </motion.button>
              <div className="mt-8 glassmorphism-box p-6">
                <h3 className="text-xl mb-4">Live Availability</h3>
                <div className="text-4xl font-bold neon-text">{spotsAvailable} Spots</div>
              </div>
            </div>

            <div className="md:w-1/2 mt-12 md:mt-0">
              <Canvas camera={{ position: [0, 5, 10] }}>
                <ambientLight intensity={0.5} />
                <pointLight position={[10, 10, 10]} color="#0ff" intensity={1} />
                <CarModel />
                <OrbitControls enableZoom={false} />
              </Canvas>
            </div>
          </div>
        </section>

        <section className="py-20">
          <div className="container mx-auto px-6">
            <div className="glassmorphism-box p-8">
              <h2 className="text-3xl font-bold mb-8 neon-heading">How It Works</h2>
              <div className="grid md:grid-cols-3 gap-8">
                {steps.map((step, i) => (
                  <motion.div key={i} whileHover={{ y: -10 }} className="p-6">
                    <Lottie options={step.animation} height={100} width={100} />
                    <h3 className="text-xl font-semibold my-4">{step.title}</h3>
                    <p className="text-gray-400">{step.desc}</p>
                  </motion.div>
                ))}
              </div>
            </div>
          </div>
        </section>
      </main>

      <ChatBot />
    </div>
  );
}